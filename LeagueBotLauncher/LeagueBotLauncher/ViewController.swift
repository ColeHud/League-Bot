//
//  ViewController.swift
//  LeagueBotLauncher
//
//  Created by Cole on 2/21/16.
//  Copyright © 2016 mhacks7dreamteam. All rights reserved.
//

import Cocoa

import Foundation

class ViewController: NSViewController
{
    func shell(args: String...) -> Int32
    {
        let task = NSTask()
        task.launchPath = task.currentDirectoryPath
        task.arguments = args
        task.launch()
        task.waitUntilExit()
        return task.terminationStatus
    }

    @IBAction func start(sender: NSButton)
    {
        dispatch_async(dispatch_get_main_queue())
        {
           execute()
        }
    }
    
    override func viewDidLoad()
    {
        super.viewDidLoad()

        // Do any additional setup after loading the view.
    }

    override var representedObject: AnyObject?
    {
        didSet
        {
            // Update the view, if already loaded.
        }
    }


}

