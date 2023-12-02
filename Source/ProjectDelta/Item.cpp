// Fill out your copyright notice in the Description page of Project Settings.


#include "Item.h"


UItem::UItem() {
	
}

UItem* UItem::SetProperties(UItem* item, FItemData inProperties) {
	item->Properties = inProperties;
	return item;
}

FString UItem::ToString() {
	if (Properties.DisplayName.EqualTo(FText::FromString("None"))) {
		return Properties.LookupString;
	}
	return TEXT("Item::ToString() Properties struct not initialised or DisplayName == \"None\".");
}
