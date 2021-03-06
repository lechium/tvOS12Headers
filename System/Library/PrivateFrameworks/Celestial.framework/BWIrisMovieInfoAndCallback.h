/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:58:28 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class BWIrisMovieInfo;

@interface BWIrisMovieInfoAndCallback : NSObject {

	BWIrisMovieInfo* _info;
	/*^block*/id _callback;
	BOOL _processed;

}

@property (nonatomic,readonly) BWIrisMovieInfo * info;              //@synthesize info=_info - In the implementation block
@property (nonatomic,readonly) id callback;                         //@synthesize callback=_callback - In the implementation block
@property (assign,nonatomic) BOOL processed;                        //@synthesize processed=_processed - In the implementation block
+(id)movieInfoAndCallbackWithMovieInfo:(id)arg1 callback:(/*^block*/id)arg2 ;
-(id)_initWithMovieInfo:(id)arg1 callback:(/*^block*/id)arg2 ;
-(id)callback;
-(BOOL)processed;
-(void)setProcessed:(BOOL)arg1 ;
-(void)dealloc;
-(BWIrisMovieInfo *)info;
@end

