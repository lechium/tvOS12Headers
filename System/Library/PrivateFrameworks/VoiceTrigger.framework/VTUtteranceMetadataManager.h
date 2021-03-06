/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:04:31 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface VTUtteranceMetadataManager : NSObject
+(void)_writeMetaDict:(id)arg1 forUtterancePath:(id)arg2 ;
+(void)_saveMetaVersionFileAtPath:(id)arg1 ;
+(void)_upgradeLocaleDirectoryIfNecessary:(id)arg1 ;
+(BOOL)_audioDirectoryNeedsUpgrade:(id)arg1 ;
+(void)_upgradeUtteranceMeta:(id)arg1 ;
+(void)saveUtteranceMetadataForUtterance:(id)arg1 isExplicitEnrollment:(BOOL)arg2 isHandheldEnrollment:(BOOL)arg3 ;
+(void)saveMetaVersionFileAtSATAudioDirectory:(id)arg1 ;
+(void)upgradeMetaFilesIfNecessaaryAtSATRoot:(id)arg1 ;
+(id)_getBaseMetaDictionaryForUtterancePath:(id)arg1 ;
@end

