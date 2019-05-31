/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:25 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol PVPersonProtocol <NSObject>
@property (nonatomic,readonly) NSString * localIdentifier; 
@property (nonatomic,readonly) unsigned long long faceCount; 
@property (nonatomic,readonly) BOOL favorite; 
@property (nonatomic,readonly) BOOL hidden; 
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) long long verifiedType; 
@property (assign,nonatomic) BOOL isVerified; 
@property (assign,nonatomic) long long manualOrder; 
@property (nonatomic,retain) id<PVFaceProtocol> keyFace; 
@required
-(void)setIsVerified:(BOOL)arg1;
-(BOOL)isVerified;
-(BOOL)favorite;
-(void)setKeyFace:(id)arg1;
-(NSString *)localIdentifier;
-(id<PVFaceProtocol>)keyFace;
-(long long)verifiedType;
-(unsigned long long)faceCount;
-(void)setManualOrder:(long long)arg1;
-(long long)manualOrder;
-(void)pv_addMergeCandidatePersons:(id)arg1;
-(NSString *)name;
-(BOOL)hidden;

@end

