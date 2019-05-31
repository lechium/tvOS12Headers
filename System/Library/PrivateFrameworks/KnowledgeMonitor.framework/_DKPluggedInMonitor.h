/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:25 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/KnowledgeMonitor.framework/KnowledgeMonitor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <KnowledgeMonitor/_DKMonitor.h>

@interface _DKPluggedInMonitor : _DKMonitor {

	BOOL _enabled;
	int _pluggedInToken;

}

@property (assign,nonatomic) BOOL enabled;                    //@synthesize enabled=_enabled - In the implementation block
@property (assign,nonatomic) int pluggedInToken;              //@synthesize pluggedInToken=_pluggedInToken - In the implementation block
+(id)eventStream;
+(id)entitlements;
+(BOOL)shouldMergeUnchangedEvents;
+(id)_eventWithState:(BOOL)arg1 ;
+(void)setIsPluggedIn:(BOOL)arg1 ;
-(void)synchronouslyReflectCurrentValue;
-(int)pluggedInToken;
-(void)setPluggedInToken:(int)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(void)stop;
-(void)start;
-(BOOL)enabled;
@end

