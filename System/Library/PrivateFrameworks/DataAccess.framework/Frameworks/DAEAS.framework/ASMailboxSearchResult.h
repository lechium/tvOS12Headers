/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:04:11 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DAEAS/ASEmailItem.h>

@class NSMutableArray, NSArray;

@interface ASMailboxSearchResult : ASEmailItem {

	NSMutableArray* _mClasses;

}

@property (nonatomic,retain) NSMutableArray * mClasses;              //@synthesize mClasses=_mClasses - In the implementation block
@property (nonatomic,readonly) NSArray * classes; 
+(BOOL)acceptsTopLevelLeaves;
+(BOOL)parsingLeafNode;
+(BOOL)parsingWithSubItems;
+(BOOL)frontingBasicTypes;
+(BOOL)notifyOfUnknownTokens;
+(id)asParseRules;
-(void)addClass:(id)arg1 ;
-(NSMutableArray *)mClasses;
-(void)setMClasses:(NSMutableArray *)arg1 ;
-(BOOL)_isSearchResult;
-(NSArray *)classes;
-(id)init;
-(id)description;
@end

