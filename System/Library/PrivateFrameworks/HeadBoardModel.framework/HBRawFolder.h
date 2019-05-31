/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:24 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/HeadBoardModel.framework/HeadBoardModel
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HeadBoardModel/HBRawRootItem.h>

@class NSString, NSArray;

@interface HBRawFolder : HBRawRootItem {

	NSString* _name;
	NSArray* _items;
	NSString* _folderIdentifier;

}

@property (nonatomic,copy) NSString * name;                                 //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSArray * items;                                 //@synthesize items=_items - In the implementation block
@property (nonatomic,copy) NSString * folderIdentifier;                     //@synthesize folderIdentifier=_folderIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSArray * allApplications; 
@property (nonatomic,copy,readonly) NSArray * allFolders; 
-(NSArray *)allApplications;
-(NSString *)folderIdentifier;
-(void)setFolderIdentifier:(NSString *)arg1 ;
-(NSArray *)allFolders;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(id)description;
-(NSArray *)items;
-(void)setItems:(NSArray *)arg1 ;
@end
