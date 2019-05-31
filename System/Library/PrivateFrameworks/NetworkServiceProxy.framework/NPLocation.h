/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:00:38 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/NetworkServiceProxy.framework/NetworkServiceProxy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NetworkServiceProxy/NetworkServiceProxy-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate;

@interface NPLocation : NSObject <NSSecureCoding> {

	double _latitude;
	double _longtitude;
	NSDate* _timestamp;

}

@property (readonly) BOOL isValid; 
@property (assign) double latitude;                 //@synthesize latitude=_latitude - In the implementation block
@property (assign) double longtitude;               //@synthesize longtitude=_longtitude - In the implementation block
@property (retain) NSDate * timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setLatitude:(double)arg1 ;
-(double)latitude;
-(id)initWithLatitude:(double)arg1 longtitude:(double)arg2 timestamp:(id)arg3 ;
-(double)longtitude;
-(void)setLongtitude:(double)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDate *)timestamp;
-(void)setTimestamp:(NSDate *)arg1 ;
-(BOOL)isValid;
@end

