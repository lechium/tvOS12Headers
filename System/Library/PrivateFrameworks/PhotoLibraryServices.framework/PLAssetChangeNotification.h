/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:01:04 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PLChangeNotification.h>

@class NSSet;

@interface PLAssetChangeNotification : PLChangeNotification {

	NSSet* _updatedAssets;

}

@property (nonatomic,copy) NSSet * updatedAssets;              //@synthesize updatedAssets=_updatedAssets - In the implementation block
+(id)notificationWithChangedAssets:(id)arg1 ;
-(id)_initWithChangedObjects:(id)arg1 ;
-(NSSet *)updatedAssets;
-(void)setUpdatedAssets:(NSSet *)arg1 ;
-(void)dealloc;
-(id)userInfo;
-(id)name;
-(id)description;
-(id)object;
-(id)_init;
@end

