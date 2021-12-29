#ifndef org_apache_lucene_analysis_path_PathHierarchyTokenizer_H
#define org_apache_lucene_analysis_path_PathHierarchyTokenizer_H

#include "org/apache/lucene/analysis/Tokenizer.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class AttributeFactory;
      }
    }
  }
}
namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace path {

          class PathHierarchyTokenizer : public ::org::apache::lucene::analysis::Tokenizer {
           public:
            enum {
              mid_init$_f2cc1bce94666404,
              mid_init$_040c4cd0390c5aff,
              mid_init$_f28e156a8b542ec8,
              mid_init$_49eec491b83160ef,
              mid_init$_92254c745d1d56c8,
              mid_init$_f7f4575bb0fb8a29,
              mid_init$_9643b5b77a650257,
              mid_init$_38dd631bad36a6f7,
              mid_end_f2cc1bce94666404,
              mid_incrementToken_8454bd5aa23fd11e,
              mid_reset_f2cc1bce94666404,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PathHierarchyTokenizer(jobject obj) : ::org::apache::lucene::analysis::Tokenizer(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            PathHierarchyTokenizer(const PathHierarchyTokenizer& obj) : ::org::apache::lucene::analysis::Tokenizer(obj) {}

            static jchar DEFAULT_DELIMITER;
            static jint DEFAULT_SKIP;

            PathHierarchyTokenizer();
            PathHierarchyTokenizer(jint);
            PathHierarchyTokenizer(jchar, jchar);
            PathHierarchyTokenizer(jint, jchar);
            PathHierarchyTokenizer(jchar, jchar, jint);
            PathHierarchyTokenizer(const ::org::apache::lucene::util::AttributeFactory &, jchar, jchar, jint);
            PathHierarchyTokenizer(jint, jchar, jchar, jint);
            PathHierarchyTokenizer(const ::org::apache::lucene::util::AttributeFactory &, jint, jchar, jchar, jint);

            void end() const;
            jboolean incrementToken() const;
            void reset() const;
          };
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
        namespace path {
          extern PyType_Def PY_TYPE_DEF(PathHierarchyTokenizer);
          extern PyTypeObject *PY_TYPE(PathHierarchyTokenizer);

          class t_PathHierarchyTokenizer {
          public:
            PyObject_HEAD
            PathHierarchyTokenizer object;
            static PyObject *wrap_Object(const PathHierarchyTokenizer&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
