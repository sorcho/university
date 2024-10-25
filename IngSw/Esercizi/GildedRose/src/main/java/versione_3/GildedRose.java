// commit: aggiunte funzioni che controllano se la qualità può essere modificata
//         aggiunta funzione per vedere se un oggetto è scaduto

package versione_3;

class GildedRose {
    Item[] items;

    public GildedRose(Item[] items) {
        this.items = items;
    }

    public void updateQuality() {
        for (Item item : items) {
            if (!item.name.equals("Aged Brie")
                    && !item.name.equals("Backstage passes to a TAFKAL80ETC concert")) {
                if (canDecreaseQuality(item)) {
                    if (!item.name.equals("Sulfuras, Hand of Ragnaros")) {
                        item.quality = item.quality - 1;
                    }
                }
            } else {
                if (canIncreaseQuality(item)) {
                    item.quality = item.quality + 1;

                    if (item.name.equals("Backstage passes to a TAFKAL80ETC concert")) {
                        if (item.sellIn < 11) {
                            if (canIncreaseQuality(item)) {
                                item.quality = item.quality + 1;
                            }
                        }

                        if (item.sellIn < 6) {
                            if (canIncreaseQuality(item)) {
                                item.quality = item.quality + 1;
                            }
                        }
                    }
                }
            }

            if (!item.name.equals("Sulfuras, Hand of Ragnaros")) {
                item.sellIn = item.sellIn - 1;
            }

            if (isExpired(item)) {
                if (!item.name.equals("Aged Brie")) {
                    if (!item.name.equals("Backstage passes to a TAFKAL80ETC concert")) {
                        if (item.quality > 0) {
                            if (!item.name.equals("Sulfuras, Hand of Ragnaros")) {
                                item.quality = item.quality - 1;
                            }
                        }
                    } else {
                        item.quality = 0;
                    }
                } else {
                    if (canIncreaseQuality(item)) {
                        item.quality = item.quality + 1;
                    }
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
}