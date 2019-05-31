/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:03:31 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextInputCore/TextInputCore-Structs.h>
#import <TextInputCore/TIKeyboardInputManager.h>

@interface TIKeyboardInputManager_mul : TIKeyboardInputManager {

	BOOL _isSuspended;

}
-(BOOL)updateLanguageModelForKeyboardState;
-(id)keyboardConfiguration;
-(void)enumerateInputModesWithBlock:(/*^block*/id)arg1 ;
-(unsigned)lexiconIDForInputMode:(id)arg1 ;
-(float)weightForInputMode:(id)arg1 ;
-(SCD_Struct_TI6)lexiconInfoForInputMode:(id)arg1 ;
-(vector<KB::LexiconInfo, std::__1::allocator<KB::LexiconInfo> >*)lexiconInformationVector;
-(LanguageModelContainer*)languageModelContainer;
-(BOOL)shouldUpdateDictionary;
-(void)loadDictionaries;
-(void)didUpdateInputModes:(id)arg1 ;
-(void)didUpdateInputModeProbabilities:(id)arg1 ;
-(void)updateLanguagePriors;
-(id)resourceInputModes;
-(void)resume;
-(void)suspend;
@end
