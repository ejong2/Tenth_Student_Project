// Fill out your copyright notice in the Description page of Project Settings.


#include "DragWidget.h"

UDragWidget::UDragWidget()
{
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 3.f, FColor::Blue, TEXT("Const"));

	}
}

UDragWidget::~UDragWidget()
{
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 3.f, FColor::Blue, TEXT("Dest"));
	}

}
