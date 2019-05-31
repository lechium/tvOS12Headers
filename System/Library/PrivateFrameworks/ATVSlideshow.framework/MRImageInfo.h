/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:08 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSRecursiveLock, NSDate, MRImage, NSMutableDictionary, MRGIFMoviePlayer;

@interface MRImageInfo : NSObject {

	NSString* _imageBufferKey;
	NSRecursiveLock* _lock;
	unsigned long long _retainCount;
	NSDate* _modDate;
	MRImage* _image;
	NSMutableDictionary* _options;
	MRGIFMoviePlayer* _gifMoviePlayer;
	NSMutableDictionary* _imagesForRemoteKeys;
	BOOL _isMovie;

}

@property (readonly) NSString * imageBufferKey;                            //@synthesize imageBufferKey=_imageBufferKey - In the implementation block
@property (assign) unsigned long long retainCount;                         //@synthesize retainCount=_retainCount - In the implementation block
@property (retain) NSDate * modDate;                                       //@synthesize modDate=_modDate - In the implementation block
@property (retain) MRImage * image;                                        //@synthesize image=_image - In the implementation block
@property (retain) NSMutableDictionary * options;                          //@synthesize options=_options - In the implementation block
@property (retain) MRGIFMoviePlayer * gifMoviePlayer;                      //@synthesize gifMoviePlayer=_gifMoviePlayer - In the implementation block
@property (retain) NSMutableDictionary * imagesForRemoteKeys;              //@synthesize imagesForRemoteKeys=_imagesForRemoteKeys - In the implementation block
@property (assign) BOOL isMovie;                                           //@synthesize isMovie=_isMovie - In the implementation block
-(NSString *)imageBufferKey;
-(id)initWithImageBufferKey:(id)arg1 ;
-(void)setRetainCount:(unsigned long long)arg1 ;
-(NSDate *)modDate;
-(void)setModDate:(NSDate *)arg1 ;
-(BOOL)isMovie;
-(void)setIsMovie:(BOOL)arg1 ;
-(MRGIFMoviePlayer *)gifMoviePlayer;
-(void)setGifMoviePlayer:(MRGIFMoviePlayer *)arg1 ;
-(NSMutableDictionary *)imagesForRemoteKeys;
-(void)setImagesForRemoteKeys:(NSMutableDictionary *)arg1 ;
-(void)dealloc;
-(unsigned long long)retainCount;
-(void)setImage:(MRImage *)arg1 ;
-(MRImage *)image;
-(NSMutableDictionary *)options;
-(void)cleanup;
-(void)lock;
-(void)unlock;
-(void)setOptions:(NSMutableDictionary *)arg1 ;
@end
