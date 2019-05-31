/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:01:23 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Photos/Photos-Structs.h>
#import <libobjc.A.dylib/PHRecyclableObject.h>

@class NSError, NSMutableArray, NSString;

@interface PHImageCacheEntry : NSObject <PHRecyclableObject> {

	NSError* _error;
	CGImageRef _imageRef;
	os_unfair_lock_s _lock;
	BOOL _isCancelled;
	NSMutableArray* _handlersWaitingOnResult;
	int _imageRequestIDForPopulatingCache;

}

@property (assign,nonatomic) int imageRequestIDForPopulatingCache;              //@synthesize imageRequestIDForPopulatingCache=_imageRequestIDForPopulatingCache - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_callWaiters:(id)arg1 wasCancelled:(BOOL)arg2 ;
-(CGImageRef)createImageRef;
-(void)addNotifyHandler:(/*^block*/id)arg1 ;
-(void)populateWithImageRef:(CGImageRef)arg1 error:(id)arg2 unlockBeforeNotfiyingWaiters:(os_unfair_lock_s*)arg3 ;
-(int)imageRequestIDForPopulatingCache;
-(void)setImageRequestIDForPopulatingCache:(int)arg1 ;
-(id)init;
-(void)dealloc;
-(void)prepareForReuse;
-(void)cancel;
-(BOOL)isCancelled;
@end

