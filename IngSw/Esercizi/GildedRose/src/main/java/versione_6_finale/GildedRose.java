// commit: reso il codice più ordinato e più leggibile

package versione_6_finale;

class GildedRose {
    Item[] items;

    public GildedRose(Item[] items) {
        this.items = items;
    }

    public void updateQuality() {
        for (Item item : items) {
            if (isAgedBrie(item)) {
                increaseQuality(item);

                if (isExpired(item)) {
                    increaseQuality(item);
                }
            } else if (isBackstagePass(item)) {
                if (isExpired(item)) {
                    item.quality = 0;
                } else {
                    updateBackstagePassQuality(item);
                }
            } else if (isSulfuras(item)) {
                item.quality = 80;
            } else {
                decreaseQuality(item);

                if (isConjured(item)) {
                    decreaseQuality(item);
                }
            }

            if (!isSulfuras(item)) {
                decreaseSellIn(item);
            }
        }
    }

    private boolean canIncreaseQuality(Item item) {
        return item.quality < 50;
    }

    private boolean canDecreaseQuality(Item item) {
        return item.quality > 0;
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

    private boolean isConjured(Item item) {
        return item.name.startsWith("Conjured ");
    }

    private boolean isSulfuras(Item item) {
        return item.name.equals("Sulfuras, Hand of Ragnaros");
    }

    private boolean isExpired(Item item) {
        return item.sellIn < 0;
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
}