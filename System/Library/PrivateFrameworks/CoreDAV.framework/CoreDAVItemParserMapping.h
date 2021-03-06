/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:00:41 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface CoreDAVItemParserMapping : NSObject {

	NSString* _nameSpace;
	NSString* _name;
	Class _parseClass;

}

@property (nonatomic,retain) NSString * nameSpace;              //@synthesize nameSpace=_nameSpace - In the implementation block
@property (nonatomic,retain) NSString * name;                   //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) Class parseClass;                  //@synthesize parseClass=_parseClass - In the implementation block
-(NSString *)nameSpace;
-(void)setNameSpace:(NSString *)arg1 ;
-(void)setParseClass:(Class)arg1 ;
-(Class)parseClass;
-(id)initWithNameSpace:(id)arg1 name:(id)arg2 parseClass:(Class)arg3 ;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(id)description;
@end

