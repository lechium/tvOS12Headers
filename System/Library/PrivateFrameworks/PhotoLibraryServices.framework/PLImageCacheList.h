/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:00:59 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, PLLoadRequestKey;

@interface PLImageCacheList : NSObject {

	NSObject*<OS_dispatch_queue> _isolation;
	unsigned _length;
	unsigned _lastFailLocation;
	id* _keys;
	unsigned long long* _keyHashes;
	id* _images;
	PLLoadRequestKey* _dummy[1];

}
+(id)newImageCacheList;
-(id)imageForKey:(id)arg1 ;
-(void)removeImageForKey:(id)arg1 ;
-(void)setImage:(id)arg1 forKey:(id)arg2 ;
-(id)init;
-(void)dealloc;
-(id)_init;
@end
