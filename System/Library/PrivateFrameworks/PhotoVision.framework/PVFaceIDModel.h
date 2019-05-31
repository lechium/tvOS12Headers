/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:27 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/PhotoVision.framework/PhotoVision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PVFaceIDModel : NSObject
+(BOOL)persistModel:(id)arg1 toPath:(id)arg2 error:(id*)arg3 ;
+(id)newMutablePersonsModel;
+(BOOL)addFaceObservations:(id)arg1 forPersonIdentifier:(id)arg2 toModel:(id)arg3 error:(id*)arg4 ;
+(id)modelFileName;
+(id)faceObservationFromFaceprintData:(id)arg1 ;
+(id)classifyFaceObservation:(id)arg1 withModel:(id)arg2 error:(id*)arg3 ;
+(id)loadModelAtPath:(id)arg1 error:(id*)arg2 ;
+(id)defaultConfiguration;
@end

