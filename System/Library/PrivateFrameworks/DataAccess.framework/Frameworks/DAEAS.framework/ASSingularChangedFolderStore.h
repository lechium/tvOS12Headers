/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:04:11 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DAEAS/ASChangedFolderStore.h>

@class NSString;

@interface ASSingularChangedFolderStore : ASChangedFolderStore {

	NSString* _serverId;

}

@property (nonatomic,retain) NSString * serverId;              //@synthesize serverId=_serverId - In the implementation block
+(BOOL)acceptsTopLevelLeaves;
+(BOOL)parsingLeafNode;
+(BOOL)parsingWithSubItems;
+(BOOL)frontingBasicTypes;
+(BOOL)notifyOfUnknownTokens;
+(id)asParseRules;
-(NSString *)serverId;
-(void)setServerId:(NSString *)arg1 ;
@end
