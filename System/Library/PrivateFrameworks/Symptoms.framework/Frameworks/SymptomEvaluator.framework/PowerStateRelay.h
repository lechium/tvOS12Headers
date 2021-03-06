/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:31 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PowerStateRelay : NSObject {

	int powerStateToken;
	int screenStateToken;
	BOOL _pluggedIn;
	BOOL _screenNotDark;

}

@property (assign) BOOL pluggedIn;                  //@synthesize pluggedIn=_pluggedIn - In the implementation block
@property (assign) BOOL screenNotDark;              //@synthesize screenNotDark=_screenNotDark - In the implementation block
+(id)defaultRelay;
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(BOOL)pluggedIn;
-(void)setPluggedIn:(BOOL)arg1 ;
-(void)setScreenNotDark:(BOOL)arg1 ;
-(BOOL)screenNotDark;
-(id)init;
@end

