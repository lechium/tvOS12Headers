/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:08:55 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUI/VideosUI-Structs.h>
#import <VideosUI/VUIMediaLibrary.h>

@protocol OS_dispatch_queue;
@class MPMediaLibrary, NSObject, NSOperationQueue;

@interface VUIMPMediaLibrary : VUIMediaLibrary {

	unsigned long long _connectionState;
	MPMediaLibrary* _mediaLibrary;
	NSObject*<OS_dispatch_queue> _serialProcessingDispatchQueue;
	NSOperationQueue* _serialOperationQueue;

}

@property (assign,nonatomic) unsigned long long connectionState;                                      //@synthesize connectionState=_connectionState - In the implementation block
@property (nonatomic,retain) MPMediaLibrary * mediaLibrary;                                           //@synthesize mediaLibrary=_mediaLibrary - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> serialProcessingDispatchQueue;              //@synthesize serialProcessingDispatchQueue=_serialProcessingDispatchQueue - In the implementation block
@property (nonatomic,retain) NSOperationQueue * serialOperationQueue;                                 //@synthesize serialOperationQueue=_serialOperationQueue - In the implementation block
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
+(unsigned long long)_connectionStateFromMPMediaLibraryStatus:(long long)arg1 ;
-(NSOperationQueue *)serialOperationQueue;
-(void)setMediaLibrary:(MPMediaLibrary *)arg1 ;
-(MPMediaLibrary *)mediaLibrary;
-(void)setConnectionState:(unsigned long long)arg1 ;
-(unsigned long long)connectionState;
-(BOOL)hasImageCache;
-(void)dealloc;
-(id)title;
-(NSObject*<OS_dispatch_queue>)serialProcessingDispatchQueue;
-(void)setSerialProcessingDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)_imageLoadParamsForImageLoaderObject:(id)arg1 ;
-(id)_imageLoadOperationWithParams:(id)arg1 scaleToSize:(CGSize)arg2 cropToFit:(BOOL)arg3 ;
-(id)_imageLoaderIdentifier;
-(void)_handleMediaLibraryContentsDidChangeNotification:(id)arg1 ;
-(id)initWithMPMediaLibrary:(id)arg1 type:(unsigned long long)arg2 manager:(id)arg3 ;
-(id)initWithIdentifier:(id)arg1 type:(unsigned long long)arg2 manager:(id)arg3 ;
-(id)enqueueMediaItemEntityTypesFetchWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)enqueueFetchRequests:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)saveMediaEntity:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_handleMediaLibraryStatusDidChangeNotification:(id)arg1 ;
-(void)_enqueueProcessingBlock:(/*^block*/id)arg1 ;
-(void)connectWithCompletionHandler:(/*^block*/id)arg1 progressHandler:(/*^block*/id)arg2 ;
-(void)setSerialOperationQueue:(NSOperationQueue *)arg1 ;
@end

