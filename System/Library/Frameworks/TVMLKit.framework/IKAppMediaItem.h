/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:58 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSURL, NSString, IKAppMediaItemBridge;


@protocol IKAppMediaItem
@property (nonatomic,retain) NSURL * url; 
@property (nonatomic,retain) NSString * type; 
@property (nonatomic,readonly) IKAppMediaItemBridge * bridge; 
@required
-(IKAppMediaItemBridge *)bridge;
-(void)setObject:(id)arg1 forKey:(id)arg2;
-(id)objectForKey:(id)arg1;
-(NSString *)type;
-(void)setType:(id)arg1;
-(NSURL *)url;
-(void)setUrl:(id)arg1;

@end
