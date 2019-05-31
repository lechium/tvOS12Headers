/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:02:44 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/CloudServices.framework/CloudServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSDictionary;


@protocol SRPClientRequest <NSObject>
@property (nonatomic,copy,readonly) NSString * dsid; 
@property (nonatomic,copy,readonly) NSString * recordLabel; 
@property (nonatomic,copy,readonly) NSString * recoveryPassphrase; 
@property (nonatomic,retain,readonly) NSDictionary * escrowRecord; 
@property (nonatomic,copy,readonly) NSString * recordID; 
@required
-(id)validateInput;
-(NSString *)recordLabel;
-(NSString *)recoveryPassphrase;
-(NSDictionary *)escrowRecord;
-(NSString *)dsid;
-(NSString *)recordID;

@end
