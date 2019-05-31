/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:07 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDLogEvent.h>
#import <libobjc.A.dylib/HMDAWDLogEvent.h>

@class NSString;

@interface HMDAssistantAccessControlModifiedEvent : HMDLogEvent <HMDAWDLogEvent> {

	BOOL _isEnabled;
	unsigned long long _options;
	unsigned long long _numEnabledAccessories;
	unsigned long long _numCapableAccessories;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL isEnabled;                                        //@synthesize isEnabled=_isEnabled - In the implementation block
@property (assign,nonatomic) unsigned long long options;                            //@synthesize options=_options - In the implementation block
@property (assign,nonatomic) unsigned long long numEnabledAccessories;              //@synthesize numEnabledAccessories=_numEnabledAccessories - In the implementation block
@property (assign,nonatomic) unsigned long long numCapableAccessories;              //@synthesize numCapableAccessories=_numCapableAccessories - In the implementation block
+(id)eventWithIsEnabled:(BOOL)arg1 options:(unsigned long long)arg2 numEnabledAccessories:(unsigned long long)arg3 numCapableAccessories:(unsigned long long)arg4 ;
+(void)initialize;
+(id)uuid;
-(void)setIsEnabled:(BOOL)arg1 ;
-(void)setNumEnabledAccessories:(unsigned long long)arg1 ;
-(void)setNumCapableAccessories:(unsigned long long)arg1 ;
-(unsigned long long)numEnabledAccessories;
-(unsigned long long)numCapableAccessories;
-(unsigned)AWDMessageType;
-(id)metricForAWD;
-(BOOL)isEnabled;
-(unsigned long long)options;
-(void)setOptions:(unsigned long long)arg1 ;
@end
