/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:02:34 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPModelObject.h>

@class NSString;

@interface MPModelFileAsset : MPModelObject

@property (nonatomic,copy) NSString * filePath; 
@property (assign,nonatomic) unsigned long long fileSize; 
@property (assign,nonatomic) long long protectionType; 
@property (assign,getter=isNonPurgeable,nonatomic) BOOL nonPurgeable; 
@property (nonatomic,copy) NSString * purchaseBundleFilePath; 
@property (assign,nonatomic) long long qualityType; 
+(id)allSupportedProperties;
+(id)__filePath_KEY;
+(id)__fileSize_KEY;
+(id)__nonPurgeable_KEY;
+(id)__protectionType_KEY;
+(id)__purchaseBundleFilePath_KEY;
+(id)__qualityType_KEY;
@end
