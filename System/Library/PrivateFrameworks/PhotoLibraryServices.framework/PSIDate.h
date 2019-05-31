/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:01:03 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PSIDate : NSObject {

	long long _int64Representation;
	long long _int64RepresentationMask;

}

@property (readonly) long long year; 
@property (readonly) long long month; 
@property (readonly) long long day; 
@property (readonly) long long int64Representation;                  //@synthesize int64Representation=_int64Representation - In the implementation block
@property (readonly) long long int64RepresentationMask;              //@synthesize int64RepresentationMask=_int64RepresentationMask - In the implementation block
+(id)descriptionWithInt64Representation:(long long)arg1 ;
+(id)distantPast;
+(id)distantFuture;
-(id)initWithUniversalDate:(id)arg1 calendar:(id)arg2 ;
-(long long)int64RepresentationMask;
-(long long)int64Representation;
-(id)initWithInt64Representation:(long long)arg1 ;
-(id)initWithDateComponents:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(long long)year;
-(long long)month;
-(long long)day;
-(id)dateComponents;
@end
