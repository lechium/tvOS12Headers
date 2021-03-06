/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:48 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/TVKit.framework/TVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TVKit/TVKit-Structs.h>
@class NSURL;

@interface TVArtworkVariant : NSObject {

	NSURL* _artworkURL;
	long long _artworkType;
	CGSize _artworkSize;

}

@property (nonatomic,copy,readonly) NSURL * artworkURL;              //@synthesize artworkURL=_artworkURL - In the implementation block
@property (nonatomic,readonly) CGSize artworkSize;                   //@synthesize artworkSize=_artworkSize - In the implementation block
@property (nonatomic,readonly) long long artworkType;                //@synthesize artworkType=_artworkType - In the implementation block
-(long long)artworkType;
-(NSURL *)artworkURL;
-(CGSize)artworkSize;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
@end

