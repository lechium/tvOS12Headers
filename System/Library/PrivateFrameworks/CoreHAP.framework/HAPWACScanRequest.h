/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:05:15 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreHAP/CoreHAP-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSUUID, HAPWACScanFilter;

@interface HAPWACScanRequest : HMFObject <NSCopying> {

	NSUUID* _uuid;
	unsigned long long _filterMethod;
	HAPWACScanFilter* _filter;
	/*^block*/id _completion;

}

@property (nonatomic,copy) NSUUID * uuid;                                    //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,readonly) unsigned long long filterMethod;              //@synthesize filterMethod=_filterMethod - In the implementation block
@property (nonatomic,retain) HAPWACScanFilter * filter;                      //@synthesize filter=_filter - In the implementation block
@property (nonatomic,copy) id completion;                                    //@synthesize completion=_completion - In the implementation block
-(unsigned long long)filterMethod;
-(id)initWithFilter:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)isEqualToWACScanRequest:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)setUuid:(NSUUID *)arg1 ;
-(NSUUID *)uuid;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setCompletion:(id)arg1 ;
-(id)completion;
-(HAPWACScanFilter *)filter;
-(void)setFilter:(HAPWACScanFilter *)arg1 ;
@end

