/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:08:24 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, UIKBScreenTraits;

@interface UIKeyboardKeyplaneTransformationContext : NSObject {

	BOOL _usesScriptSwitch;
	NSString* _currentKeyplaneName;
	UIKBScreenTraits* _screenTraits;

}

@property (nonatomic,retain) NSString * currentKeyplaneName;               //@synthesize currentKeyplaneName=_currentKeyplaneName - In the implementation block
@property (nonatomic,retain) UIKBScreenTraits * screenTraits;              //@synthesize screenTraits=_screenTraits - In the implementation block
@property (assign,nonatomic) BOOL usesScriptSwitch;                        //@synthesize usesScriptSwitch=_usesScriptSwitch - In the implementation block
-(void)setScreenTraits:(UIKBScreenTraits *)arg1 ;
-(void)setCurrentKeyplaneName:(NSString *)arg1 ;
-(void)setUsesScriptSwitch:(BOOL)arg1 ;
-(NSString *)currentKeyplaneName;
-(UIKBScreenTraits *)screenTraits;
-(BOOL)usesScriptSwitch;
@end
