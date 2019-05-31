/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:38 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/Seeding.framework/Seeding
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSURL, NSArray;

@interface SDBetaProgram : NSObject {

	long long _programID;
	NSString* _title;
	NSString* _program;
	NSURL* _catalog;
	NSURL* _assetUpdate;
	NSURL* _assetBrain;
	NSString* _assetAudience;
	NSArray* _legalDocs;

}

@property (assign) long long programID;                   //@synthesize programID=_programID - In the implementation block
@property (retain) NSString * title;                      //@synthesize title=_title - In the implementation block
@property (retain) NSString * program;                    //@synthesize program=_program - In the implementation block
@property (retain) NSURL * catalog;                       //@synthesize catalog=_catalog - In the implementation block
@property (retain) NSURL * assetUpdate;                   //@synthesize assetUpdate=_assetUpdate - In the implementation block
@property (retain) NSURL * assetBrain;                    //@synthesize assetBrain=_assetBrain - In the implementation block
@property (retain) NSString * assetAudience;              //@synthesize assetAudience=_assetAudience - In the implementation block
@property (retain) NSArray * legalDocs;                   //@synthesize legalDocs=_legalDocs - In the implementation block
+(id)nilIfNSNull:(id)arg1 ;
+(id)betaProgramWithID:(long long)arg1 title:(id)arg2 program:(id)arg3 catalog:(id)arg4 assetUpdate:(id)arg5 assetBrain:(id)arg6 assetAudience:(id)arg7 legalDocs:(id)arg8 ;
+(id)betaProgramWithJSON:(id)arg1 ;
-(NSString *)program;
-(void)setProgram:(NSString *)arg1 ;
-(id)initWithID:(long long)arg1 title:(id)arg2 program:(id)arg3 catalog:(id)arg4 assetUpdate:(id)arg5 assetBrain:(id)arg6 assetAudience:(id)arg7 legalDocs:(id)arg8 ;
-(void)setProgramID:(long long)arg1 ;
-(void)setAssetUpdate:(NSURL *)arg1 ;
-(void)setAssetBrain:(NSURL *)arg1 ;
-(void)setAssetAudience:(NSString *)arg1 ;
-(void)setLegalDocs:(NSArray *)arg1 ;
-(long long)programID;
-(NSURL *)assetUpdate;
-(NSURL *)assetBrain;
-(NSString *)assetAudience;
-(NSArray *)legalDocs;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(NSURL *)catalog;
-(void)setCatalog:(NSURL *)arg1 ;
@end

