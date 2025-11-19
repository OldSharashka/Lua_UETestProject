// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseAttributeSet.h"
#include "GameplayEffectExtension.h"

void UBaseAttributeSet::PostGameplayEffectExecute(const FGameplayEffectModCallbackData& Data)
{
	Super::PostGameplayEffectExecute(Data);
	if (Data.EvaluatedData.Attribute == GetHPAttribute())
	{
		SetHP(FMath::Clamp(GetHP(), 0.0, GetMaxHP()));
	}

	Super::PostGameplayEffectExecute(Data);
	if (Data.EvaluatedData.Attribute == GetMPAttribute())
	{
		SetHP(FMath::Clamp(GetMP(), 0.0, GetMaxMP()));
	}

	Super::PostGameplayEffectExecute(Data);
	if (Data.EvaluatedData.Attribute == GetStrengthAttribute())
	{
		SetHP(FMath::Clamp(GetStrength(), 0.0, GetMaxStrength()));
	}





}
	
