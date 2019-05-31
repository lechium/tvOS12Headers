/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:38 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/WiFiVelocity.framework/WiFiVelocity
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WiFiVelocity/WiFiVelocity-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface W5PingResult : NSObject <NSCopying, NSSecureCoding> {

	NSString* _address;
	NSString* _interfaceName;
	double _timeout;
	double _wait;
	double _interval;
	long long _count;
	long long _trafficClass;
	long long _dataLength;
	double _packetLoss;
	double _min;
	double _max;
	double _avg;
	double _stddev;
	NSString* _command;
	NSString* _output;
	double _startedAt;
	double _endedAt;

}

@property (nonatomic,copy) NSString * address;                    //@synthesize address=_address - In the implementation block
@property (nonatomic,copy) NSString * interfaceName;              //@synthesize interfaceName=_interfaceName - In the implementation block
@property (assign,nonatomic) double timeout;                      //@synthesize timeout=_timeout - In the implementation block
@property (assign,nonatomic) double wait;                         //@synthesize wait=_wait - In the implementation block
@property (assign,nonatomic) double interval;                     //@synthesize interval=_interval - In the implementation block
@property (assign,nonatomic) long long count;                     //@synthesize count=_count - In the implementation block
@property (assign,nonatomic) long long trafficClass;              //@synthesize trafficClass=_trafficClass - In the implementation block
@property (assign,nonatomic) long long dataLength;                //@synthesize dataLength=_dataLength - In the implementation block
@property (assign,nonatomic) double packetLoss;                   //@synthesize packetLoss=_packetLoss - In the implementation block
@property (assign,nonatomic) double min;                          //@synthesize min=_min - In the implementation block
@property (assign,nonatomic) double max;                          //@synthesize max=_max - In the implementation block
@property (assign,nonatomic) double avg;                          //@synthesize avg=_avg - In the implementation block
@property (assign,nonatomic) double stddev;                       //@synthesize stddev=_stddev - In the implementation block
@property (nonatomic,copy) NSString * command;                    //@synthesize command=_command - In the implementation block
@property (nonatomic,copy) NSString * output;                     //@synthesize output=_output - In the implementation block
@property (assign,nonatomic) double timestamp; 
@property (assign,nonatomic) double startedAt;                    //@synthesize startedAt=_startedAt - In the implementation block
@property (assign,nonatomic) double endedAt;                      //@synthesize endedAt=_endedAt - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setTrafficClass:(long long)arg1 ;
-(long long)trafficClass;
-(void)setInterfaceName:(NSString *)arg1 ;
-(NSString *)interfaceName;
-(double)wait;
-(void)setTimeout:(double)arg1 ;
-(double)timeout;
-(void)setAddress:(NSString *)arg1 ;
-(NSString *)address;
-(void)setAvg:(double)arg1 ;
-(long long)dataLength;
-(void)setDataLength:(long long)arg1 ;
-(NSString *)output;
-(void)setOutput:(NSString *)arg1 ;
-(double)min;
-(double)max;
-(double)avg;
-(double)stddev;
-(NSString *)command;
-(void)setCommand:(NSString *)arg1 ;
-(void)setMin:(double)arg1 ;
-(void)setMax:(double)arg1 ;
-(void)setStartedAt:(double)arg1 ;
-(double)startedAt;
-(double)endedAt;
-(void)setWait:(double)arg1 ;
-(void)setPacketLoss:(double)arg1 ;
-(void)setStddev:(double)arg1 ;
-(void)setEndedAt:(double)arg1 ;
-(double)packetLoss;
-(void)dealloc;
-(long long)count;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)conformsToProtocol:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)timestamp;
-(void)setInterval:(double)arg1 ;
-(double)interval;
-(void)setCount:(long long)arg1 ;
@end
