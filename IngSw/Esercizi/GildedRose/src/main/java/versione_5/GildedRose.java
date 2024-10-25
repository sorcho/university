// commit: aggiunte funzione che gestisce meglio la il valore Quality dei "Backstage Pass"
//         aggiunta gestione degli item "Conjured"

package versione_5;

class GildedRose {
    Item[] items;

    public GildedRose(Item[] items) {
        this.items = items;
    }

    public void updateQuality() {
        for (Item item : items) {
            if (!isAgedBrie(item) && !isBackstagePass(item)) {
                decreaseQuality(item);
            } else {
                if (canIncreaseQuality(item)) {
                    item.quality = item.quality + 1;

                    updateBackstagePassQuality(item);
                }
            }

            if (!isSulfuras(item)) {
                decreaseSellIn(item);
            }

            if (isExpired(item)) {
                if (!isAgedBrie(item)) {
                    if (!isBackstagePass(item)) {
                        if (!isSulfuras(item)) {
                            decreaseQuality(item);
                        }
                    } else {
                        item.quality = 0;
                    }
                } else {
                    increaseQuality(item);
                }
            }

            if (isConjured(item) && isExpired(item)) {
                decreaseQuality(item);
            }
        }
    }

    private boolean canIncreaseQuality(Item item) {
        return item.quality < 50;
    }

    private boolean canDecreaseQuality(Item item) {
        return item.quality > 0;
    }

    private boolean isExpired(Item item) {
        return item.sellIn < 0;
    }

    private void decreaseQuality(Item item) {
        if (canDecreaseQuality(item)) {
            item.quality -= 1;
        }
    }

    private void increaseQuality(Item item) {
        if (canIncreaseQuality(item)) {
            item.quality += 1;
        }
    }

    public void decreaseSellIn(Item item) {
        if (canDecreaseSellIn(item)) {
            item.sellIn -= 1;
        }
    }

    private boolean canDecreaseSellIn(Item item) {
        return item.sellIn > 0;
    }

    private boolean isAgedBrie(Item item) {
        return item.name.equals("Aged Brie");
    }

    private boolean isBackstagePass(Item item) {
        return item.name.equals("Backstage passes to a TAFKAL80ETC concert");
    }

    private boolean isSulfuras(Item item) {
        return item.name.equals("Sulfuras, Hand of Ragnaros");
    }

    private void updateBackstagePassQuality(Item item) {
        increaseQuality(item);

        if (item.sellIn < 6) {
            increaseQuality(item);
            increaseQuality(item);
        } else if (item.sellIn < 11) {
            increaseQuality(item);
        }
    }

    private boolean isConjured(Item item) {
        return item.name.startsWith("Conjured ");
    }
}