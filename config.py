import os

#MAYA_PATH = 'D:\\Program Files\\Maya2020\\bin\\mayapy.exe'
APP_ROOT = os.path.dirname(__file__) + '//'
SCRIPT_PATH = APP_ROOT + 'Scenario.py'
EXPORT_PATH = APP_ROOT + 'tunnels\\'
DATA_PATH = EXPORT_PATH + 'data\\'
ANNOTATIONS_PATH = EXPORT_PATH + 'annotations\\'
OBJECT_POSITIONS_PATH = EXPORT_PATH + 'objectpositions\\'
SCENES_PATH = APP_ROOT + 'scenes\\'
PROFILES_PATH = APP_ROOT + 'profiles\\data\\'
OBJECTS_PATH = APP_ROOT + 'objects\\'



USE_LOCAL_DATA = False
GET_ALL = True
