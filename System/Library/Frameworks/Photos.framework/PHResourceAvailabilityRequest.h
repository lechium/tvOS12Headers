/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:01:26 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Photos/PHAvailabilityRequest.h>

@protocol PLResourceIdentity;
@interface PHResourceAvailabilityRequest : PHAvailabilityRequest {

	id<PLResourceIdentity> _resourceIdentity;

}

@property (nonatomic,readonly) id<PLResourceIdentity> resourceIdentity;              //@synthesize resourceIdentity=_resourceIdentity - In the implementation block
+(id)_convertResourceIdentityToPlistDictionary:(id)arg1 ;
-(id)initWithPlistDictionary:(id)arg1 ;
-(id)plistDictionary;
-(id)initWithAssetObjectID:(id)arg1 resourceIdentity:(id)arg2 ;
-(id<PLResourceIdentity>)resourceIdentity;
@end

