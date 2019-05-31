/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:58 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/IKAppMediaItem.h>

@class NSURL, NSString, IKAppMediaItemBridge, NSMutableDictionary, TVMediaItem;

@interface _TVMediaItem : NSObject <IKAppMediaItem> {

	NSMutableDictionary* _metadata;
	NSURL* _url;
	NSString* _type;
	IKAppMediaItemBridge* _bridge;
	TVMediaItem* _publicObj;

}

@property (nonatomic,readonly) TVMediaItem * publicObj;                    //@synthesize publicObj=_publicObj - In the implementation block
@property (nonatomic,retain) NSURL * url;                                  //@synthesize url=_url - In the implementation block
@property (nonatomic,retain) NSString * type;                              //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) IKAppMediaItemBridge * bridge;              //@synthesize bridge=_bridge - In the implementation block
+(id)_tvInterstitialsFromObject:(id)arg1 ;
+(id)_tvHighlightGroupsFromObject:(id)arg1 ;
-(IKAppMediaItemBridge *)bridge;
-(TVMediaItem *)publicObj;
-(id)initWithIKAppMediaItem:(id)arg1 ;
-(void)_forwardObject:(id)arg1 forKey:(id)arg2 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(id)objectForKey:(id)arg1 ;
-(NSString *)type;
-(void)setType:(NSString *)arg1 ;
-(NSURL *)url;
-(void)setUrl:(NSURL *)arg1 ;
@end
