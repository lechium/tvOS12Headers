/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:54 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/TVSettingKit.framework/TVSettingKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface TSKKonamiCode : NSObject {

	unsigned long long _sequenceIndex;
	NSArray* _sequence;
	SEL _action;

}

@property (nonatomic,copy) NSArray * sequence;              //@synthesize sequence=_sequence - In the implementation block
@property (assign,nonatomic) SEL action;                    //@synthesize action=_action - In the implementation block
+(id)codeWithSequence:(id)arg1 action:(SEL)arg2 ;
-(BOOL)validateSequenceWithNextPressType:(long long)arg1 ;
-(long long)nextPressType;
-(void)resetSequence;
-(SEL)action;
-(void)setAction:(SEL)arg1 ;
-(NSArray *)sequence;
-(void)setSequence:(NSArray *)arg1 ;
@end
