/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:01:03 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PSITopAssetsResultDelegate, OS_dispatch_queue;
#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@class NSObject, NSArray;

@interface PSITopAssetsResult : NSObject {

	id<PSITopAssetsResultDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _isolationQueue;
	NSArray* _assetUUIDs;
	const CFArrayRef _assetIds;

}

@property (nonatomic,retain) const CFArrayRef assetIds;                                   //@synthesize assetIds=_assetIds - In the implementation block
@property (assign,nonatomic,__weak) id<PSITopAssetsResultDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) unsigned long long assetMatchCount; 
@property (nonatomic,readonly) NSArray * assetUUIDs; 
-(unsigned long long)assetMatchCount;
-(NSArray *)assetUUIDs;
-(void)fetchAssetUUIDsWithCompletionHandler:(/*^block*/id)arg1 ;
-(const CFArrayRef)assetIds;
-(void)setAssetIds:(const CFArrayRef)arg1 ;
-(id)init;
-(void)dealloc;
-(void)setDelegate:(id<PSITopAssetsResultDelegate>)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id<PSITopAssetsResultDelegate>)delegate;
@end

