/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:54 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <libobjc.A.dylib/NSURLSessionTaskDelegate.h>
#import <libobjc.A.dylib/NSURLSessionDataDelegate.h>
#import <TVMLKit/TVImageLoader.h>

@protocol OS_dispatch_queue;
@class NSURLSession, NSMapTable, NSObject, NSString;

@interface TVURLImageLoader : NSObject <NSURLSessionTaskDelegate, NSURLSessionDataDelegate, TVImageLoader> {

	BOOL _imageRotationEnabled;
	NSURLSession* _session;
	NSMapTable* _dataTaskMap;
	NSObject*<OS_dispatch_queue> _processingQueue;

}

@property (nonatomic,readonly) NSURLSession * session;                                             //@synthesize session=_session - In the implementation block
@property (nonatomic,readonly) NSMapTable * dataTaskMap;                                           //@synthesize dataTaskMap=_dataTaskMap - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> processingQueue;                       //@synthesize processingQueue=_processingQueue - In the implementation block
@property (assign,getter=isImageRotationEnabled,nonatomic) BOOL imageRotationEnabled;              //@synthesize imageRotationEnabled=_imageRotationEnabled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(NSURLSession *)session;
-(void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3 ;
-(NSObject*<OS_dispatch_queue>)processingQueue;
-(id)imageKeyForObject:(id)arg1 ;
-(id)loadImageForObject:(id)arg1 scaleToSize:(CGSize)arg2 cropToFit:(BOOL)arg3 imageDirection:(long long)arg4 requestLoader:(id)arg5 completionHandler:(/*^block*/id)arg6 ;
-(void)cancelLoad:(id)arg1 ;
-(id)loadImageForObject:(id)arg1 scaleToSize:(CGSize)arg2 cropToFit:(BOOL)arg3 imageDirection:(long long)arg4 completionHandler:(/*^block*/id)arg5 ;
-(id)URLForObject:(id)arg1 ;
-(id)loadImageForObject:(id)arg1 scaleToSize:(CGSize)arg2 cropToFit:(BOOL)arg3 completionHandler:(/*^block*/id)arg4 ;
-(NSMapTable *)dataTaskMap;
-(void)_executeOnProcessingQueue:(/*^block*/id)arg1 ;
-(BOOL)isImageRotationEnabled;
-(void)setImageRotationEnabled:(BOOL)arg1 ;
-(id)init;
@end
