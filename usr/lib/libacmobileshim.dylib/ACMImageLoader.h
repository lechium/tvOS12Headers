/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:41 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /usr/lib/libacmobileshim.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface ACMImageLoader : NSObject {

	NSMutableDictionary* _imagesCache;

}

@property (readonly) NSMutableDictionary * imagesCache; 
+(id)sharedInstance;
-(NSMutableDictionary *)imagesCache;
-(void)dealloc;
-(id)imageNamed:(id)arg1 ;
@end

