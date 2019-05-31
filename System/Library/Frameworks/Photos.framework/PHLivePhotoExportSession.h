/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:01:26 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSURL;

@interface PHLivePhotoExportSession : NSObject {

	NSArray* _fileURLs;
	NSURL* _imageURL;
	NSURL* _videoURL;

}

@property (nonatomic,readonly) NSArray * fileURLs;              //@synthesize fileURLs=_fileURLs - In the implementation block
@property (nonatomic,retain) NSURL * imageURL;                  //@synthesize imageURL=_imageURL - In the implementation block
@property (nonatomic,retain) NSURL * videoURL;                  //@synthesize videoURL=_videoURL - In the implementation block
+(BOOL)_identifyResourceURLs:(id)arg1 outImageURL:(id*)arg2 outVideoURL:(id*)arg3 error:(id*)arg4 ;
+(BOOL)_canCreateLivePhotoWithURLs:(id)arg1 outError:(id*)arg2 ;
-(NSArray *)fileURLs;
-(void)setVideoURL:(NSURL *)arg1 ;
-(void)setImageURL:(NSURL *)arg1 ;
-(BOOL)_isOutputURLValid:(id)arg1 withOptions:(id)arg2 error:(out id*)arg3 ;
-(id)initWithResourceFileURLs:(id)arg1 ;
-(id)writeToFileURL:(id)arg1 options:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(NSURL *)imageURL;
-(NSURL *)videoURL;
@end

