/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:04:58 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/ReplayKit.framework/ReplayKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray;

@interface RPStoreInfo : NSObject {

	NSString* _bundleID;
	NSString* _appName;
	NSString* _author;
	NSString* _itemURL;
	NSArray* _categories;

}

@property (nonatomic,retain) NSString * bundleID;               //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,retain) NSString * appName;                //@synthesize appName=_appName - In the implementation block
@property (nonatomic,retain) NSString * author;                 //@synthesize author=_author - In the implementation block
@property (nonatomic,retain) NSString * itemURL;                //@synthesize itemURL=_itemURL - In the implementation block
@property (nonatomic,retain) NSArray * categories;              //@synthesize categories=_categories - In the implementation block
-(void)setBundleID:(NSString *)arg1 ;
-(NSString *)author;
-(void)setCategories:(NSArray *)arg1 ;
-(void)setAuthor:(NSString *)arg1 ;
-(NSString *)itemURL;
-(void)setItemURL:(NSString *)arg1 ;
-(void)setAppName:(NSString *)arg1 ;
-(id)dictionary;
-(NSString *)bundleID;
-(NSArray *)categories;
-(NSString *)appName;
@end
