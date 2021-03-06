/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:02:36 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MIME/MFMessageBody.h>

@class MFMimePart;

@interface MFMimeBody : MFMessageBody {

	MFMimePart* _topLevelPart;
	unsigned _preferredAlternative : 16;
	unsigned _numAlternatives : 16;

}
+(id)copyNewMimeBoundary;
+(id)versionString;
-(long long)numberOfAlternatives;
-(BOOL)isRich;
-(unsigned)numberOfAttachmentsSigned:(BOOL*)arg1 encrypted:(BOOL*)arg2 ;
-(unsigned long long)totalTextSize;
-(id)preferredBodyPart;
-(long long)preferredAlternative;
-(void)setPreferredAlternative:(long long)arg1 ;
-(id)mimeSubtype;
-(id)firstPartPassingTest:(/*^block*/id)arg1 ;
-(BOOL)isHTML;
-(id)textHtmlPart;
-(id)topLevelPart;
-(id)contentToOffset:(unsigned long long)arg1 resultOffset:(unsigned long long*)arg2 asHTML:(BOOL)arg3 isComplete:(BOOL*)arg4 ;
-(id)attachmentURLs;
-(id)partWithNumber:(id)arg1 ;
-(void)setTopLevelPart:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)attachments;
-(id)mimeType;
@end

