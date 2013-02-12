//
//  FormViewController.h
//  DropboxSampleApp
//
//  Created by Graham Cruse on 10/08/2012.
//  Copyright (c) 2012 Zendesk All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ZendeskDropbox.h"

@interface FormViewController : UITableViewController <ZendeskDropboxDelegate, UITextViewDelegate> {
    
	UITextField *email;
	UITextField *subject;
	UITextView *description;
    
    NSMutableArray *cells;
    
    ZendeskDropbox *dropbox;
}

@end

