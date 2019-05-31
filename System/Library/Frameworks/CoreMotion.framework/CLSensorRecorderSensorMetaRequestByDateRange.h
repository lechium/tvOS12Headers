/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:58:22 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface CLSensorRecorderSensorMetaRequestByDateRange : NSObject <NSSecureCoding> {

	int _dataType;
	double _startTime;
	double _endTime;

}

@property (assign) double startTime;              //@synthesize startTime=_startTime - In the implementation block
@property (assign) double endTime;                //@synthesize endTime=_endTime - In the implementation block
@property (assign) int dataType;                  //@synthesize dataType=_dataType - In the implementation block
+(BOOL)supportsSecureCoding;
-(int)dataType;
-(double)endTime;
-(void)setEndTime:(double)arg1 ;
-(void)setDataType:(int)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)startTime;
-(void)setStartTime:(double)arg1 ;
@end

