/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:52 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSNumber, NSURL, NSArray, TVImageProxy;

@interface TVPMediaItemContentProposal : NSObject {

	BOOL _loadingStarted;
	NSString* _title;
	double _presentationTime;
	NSNumber* _automaticAcceptanceInterval;
	NSURL* _previewImageURL;
	NSArray* _metadata;
	TVImageProxy* _imageProxy;

}

@property (nonatomic,retain) TVImageProxy * imageProxy;                           //@synthesize imageProxy=_imageProxy - In the implementation block
@property (assign,nonatomic) BOOL loadingStarted;                                 //@synthesize loadingStarted=_loadingStarted - In the implementation block
@property (nonatomic,retain) NSString * title;                                    //@synthesize title=_title - In the implementation block
@property (assign,nonatomic) double presentationTime;                             //@synthesize presentationTime=_presentationTime - In the implementation block
@property (nonatomic,retain) NSNumber * automaticAcceptanceInterval;              //@synthesize automaticAcceptanceInterval=_automaticAcceptanceInterval - In the implementation block
@property (nonatomic,retain) NSURL * previewImageURL;                             //@synthesize previewImageURL=_previewImageURL - In the implementation block
@property (nonatomic,retain) NSArray * metadata;                                  //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,readonly) BOOL needsLoading; 
-(NSArray *)metadata;
-(void)setMetadata:(NSArray *)arg1 ;
-(void)loadWithCompletion:(/*^block*/id)arg1 ;
-(void)setImageProxy:(TVImageProxy *)arg1 ;
-(TVImageProxy *)imageProxy;
-(NSURL *)previewImageURL;
-(BOOL)loadingStarted;
-(void)setLoadingStarted:(BOOL)arg1 ;
-(NSNumber *)automaticAcceptanceInterval;
-(BOOL)needsLoading;
-(void)setAutomaticAcceptanceInterval:(NSNumber *)arg1 ;
-(void)setPreviewImageURL:(NSURL *)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(double)presentationTime;
-(void)setPresentationTime:(double)arg1 ;
@end

