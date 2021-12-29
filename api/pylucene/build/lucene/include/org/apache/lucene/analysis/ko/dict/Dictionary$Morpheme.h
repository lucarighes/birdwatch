#ifndef org_apache_lucene_analysis_ko_dict_Dictionary$Morpheme_H
#define org_apache_lucene_analysis_ko_dict_Dictionary$Morpheme_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace ko {
          class POS$Tag;
        }
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace ko {
          namespace dict {

            class Dictionary$Morpheme : public ::java::lang::Object {
             public:
              enum {
                mid_init$_cd4cdc10aa786145,
                max_mid
              };

              enum {
                fid_posTag,
                fid_surfaceForm,
                max_fid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static jfieldID *fids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit Dictionary$Morpheme(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              Dictionary$Morpheme(const Dictionary$Morpheme& obj) : ::java::lang::Object(obj) {}

              ::org::apache::lucene::analysis::ko::POS$Tag _get_posTag() const;
              ::java::lang::String _get_surfaceForm() const;

              Dictionary$Morpheme(const ::org::apache::lucene::analysis::ko::POS$Tag &, const ::java::lang::String &);
            };
          }
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace ko {
          namespace dict {
            extern PyType_Def PY_TYPE_DEF(Dictionary$Morpheme);
            extern PyTypeObject *PY_TYPE(Dictionary$Morpheme);

            class t_Dictionary$Morpheme {
            public:
              PyObject_HEAD
              Dictionary$Morpheme object;
              static PyObject *wrap_Object(const Dictionary$Morpheme&);
              static PyObject *wrap_jobject(const jobject&);
              static void install(PyObject *module);
              static void initialize(PyObject *module);
            };
          }
        }
      }
    }
  }
}

#endif
