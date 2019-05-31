/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:59:55 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <IDSFoundation/IDSFoundation-Structs.h>
@interface IDSStunCandidate : NSObject {

	BOOL _active;
	unsigned long long _type;
	unsigned long long _priority;
	long long _transport;
	int _index;
	sockaddr_storage _address;
	sockaddr_storage _external;
	SCD_Struct_ID21 _prefix;
	unsigned long long _radioAccessTechnology;
	unsigned _mtu;
	double _extIPDetectionStartTime;

}

@property (assign,nonatomic) BOOL active;                                           //@synthesize active=_active - In the implementation block
@property (nonatomic,readonly) unsigned long long type;                             //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) unsigned long long priority;                         //@synthesize priority=_priority - In the implementation block
@property (nonatomic,readonly) long long transport;                                 //@synthesize transport=_transport - In the implementation block
@property (nonatomic,readonly) int index;                                           //@synthesize index=_index - In the implementation block
@property (nonatomic,readonly) const sockaddr* address; 
@property (assign,nonatomic) sockaddr* external; 
@property (assign,nonatomic) SCD_Struct_ID21* prefix; 
@property (assign,nonatomic) unsigned long long radioAccessTechnology;              //@synthesize radioAccessTechnology=_radioAccessTechnology - In the implementation block
@property (assign,nonatomic) unsigned mtu;                                          //@synthesize mtu=_mtu - In the implementation block
@property (assign,nonatomic) double extIPDetectionStartTime;                        //@synthesize extIPDetectionStartTime=_extIPDetectionStartTime - In the implementation block
+(id)candidateWithType:(unsigned long long)arg1 transport:(long long)arg2 radioAccessTechnology:(unsigned long long)arg3 mtu:(unsigned)arg4 index:(int)arg5 address:(sockaddr*)arg6 external:(sockaddr*)arg7 ;
-(const sockaddr*)address;
-(sockaddr*)external;
-(BOOL)isCellularStunCandidate;
-(void)setExternal:(sockaddr*)arg1 ;
-(void)updateTransport:(long long)arg1 ;
-(void)setMtu:(unsigned)arg1 ;
-(BOOL)isCompatibleWithStunCandidate:(id)arg1 ;
-(BOOL)hasNATIPv4Address;
-(BOOL)hasNATIPv4External;
-(BOOL)isLinkLocalStunCandidate;
-(BOOL)isRelayStunCandidate;
-(void)setExtIPDetectionStartTime:(double)arg1 ;
-(double)extIPDetectionStartTime;
-(id)initWithType:(unsigned long long)arg1 transport:(long long)arg2 radioAccessTechnology:(unsigned long long)arg3 mtu:(unsigned)arg4 index:(int)arg5 address:(sockaddr*)arg6 external:(sockaddr*)arg7 ;
-(BOOL)isServerReflexiveStunCandidate;
-(long long)transport;
-(void)setRadioAccessTechnology:(unsigned long long)arg1 ;
-(unsigned long long)radioAccessTechnology;
-(unsigned)mtu;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(void)setActive:(BOOL)arg1 ;
-(unsigned long long)type;
-(unsigned long long)priority;
-(BOOL)active;
-(int)index;
-(SCD_Struct_ID21*)prefix;
-(void)setPrefix:(SCD_Struct_ID21*)arg1 ;
@end

