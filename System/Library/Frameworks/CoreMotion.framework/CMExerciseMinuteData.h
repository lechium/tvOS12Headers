/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:58:08 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreMotion/CoreMotion-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSUUID, NSDate;

@interface CMExerciseMinuteData : NSObject <NSSecureCoding, NSCopying> {

	long long fRecordId;
	double fStartDate;
	NSUUID* fSourceId;

}

@property (nonatomic,readonly) NSDate * startDate; 
@property (nonatomic,readonly) long long recordId; 
@property (nonatomic,readonly) NSUUID * sourceId; 
+(id)maxExerciseMinuteDataEntries;
+(BOOL)supportsSecureCoding;
-(id)initWithStartDate:(double)arg1 recordId:(long long)arg2 sourceId:(id)arg3 ;
-(NSDate *)startDate;
-(NSUUID *)sourceId;
-(long long)recordId;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

