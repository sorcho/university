// commit: aggiunte funzioni per diminuire/aumentare qualità di un item
//         aggiunta funzione per diminuire il valore di SellIn di un item
//         aggiunta funzione per controllare se l'item è uno di quelli speciali (Sulfuras, Backstage Pass, Aged Brie)

package versione_4;

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

                    if (isBackstagePass(item)) {
                        if (item.sellIn < 11) {
                            increaseQuality(item);
                        }

                        if (item.sellIn < 6) {
                            increaseQuality(item);
                        }
                    }
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
}