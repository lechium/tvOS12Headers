/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:59:18 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextInput/TITypologyStatistic.h>

@interface TITypologyStatisticAutocorrectionListUI : TITypologyStatistic {

	BOOL _didSetListUIDisplayed;
	BOOL _listUIDisplayed;
	long long _inputsWhileHidden;
	long long _inputsWhileDisplayed;
	long long _hiddenToDisplayed;
	long long _displayedToHidden;

}

@property (nonatomic,readonly) long long inputsWhileHidden;                 //@synthesize inputsWhileHidden=_inputsWhileHidden - In the implementation block
@property (nonatomic,readonly) long long inputsWhileDisplayed;              //@synthesize inputsWhileDisplayed=_inputsWhileDisplayed - In the implementation block
@property (nonatomic,readonly) long long hiddenToDisplayed;                 //@synthesize hiddenToDisplayed=_hiddenToDisplayed - In the implementation block
@property (nonatomic,readonly) long long displayedToHidden;                 //@synthesize displayedToHidden=_displayedToHidden - In the implementation block
-(void)addInputCount;
-(long long)inputsWhileHidden;
-(long long)inputsWhileDisplayed;
-(long long)hiddenToDisplayed;
-(long long)displayedToHidden;
-(void)visitRecordAutocorrections:(id)arg1 ;
-(void)setListUIDisplayed:(BOOL)arg1 ;
-(void)visitRecordKeyboardInput:(id)arg1 ;
-(void)visitRecordSync:(id)arg1 ;
-(id)structuredReport;
@end

