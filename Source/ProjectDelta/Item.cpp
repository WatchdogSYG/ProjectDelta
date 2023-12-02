// Fill out your copyright notice in the Description page of Project Settings.


#include "Item.h"


UItem::UItem() {
	
}

UItem* UItem::SetProperties(UItem* item, FItemData inProperties) {
	item->Properties = inProperties;
	return item;
}
