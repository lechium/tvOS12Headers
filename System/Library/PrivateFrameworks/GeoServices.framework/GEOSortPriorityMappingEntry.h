/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:59:02 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface GEOSortPriorityMappingEntry : NSObject {

	long long _priority;
	long long _resultType;
	long long _resultSubtype;

}

@property (nonatomic,readonly) long long priority;                   //@synthesize priority=_priority - In the implementation block
@property (nonatomic,readonly) long long resultType;                 //@synthesize resultType=_resultType - In the implementation block
@property (nonatomic,readonly) long long resultSubtype;              //@synthesize resultSubtype=_resultSubtype - In the implementation block
-(long long)resultType;
-(long long)resultSubtype;
-(id)initWithPriority:(long long)arg1 resultType:(long long)arg2 resultSubtype:(long long)arg3 ;
-(long long)priority;
@end

